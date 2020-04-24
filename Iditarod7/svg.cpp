#include "svg.hpp"

void svgGraph(CityList &list, CityPath &path, string outputName){
  double minX = list.minX();
  double maxX = list.maxX();
  double minY = list.minY();
  double maxY = list.maxY();

  string line;

  ofstream svgOut(outputName);
  if (svgOut.is_open())
  {

    line = "<html xmlns=\"http://www.w3.org/1999/xhtml\"\n";
    line += "xmlns:svg=\"http://www.w3.org/2000/svg\">\n";
    line += "<body>\n <svg:svg width=\"2250px\" height=\"2500px\">\n";
    svgOut << line;

    double x = 0;
    double y = 0;
    double oldX = 0;
    double oldY = 0;
    double startX = 0;
    double startY = 0;
    string dot = "";

    // INSERT CITIES AND LINES HERE
    for (auto i = 0; i < path.size(); i++){
      oldX = x;
      oldY = y;

      dot = "<svg:circle cx=\"";
      x = 1980 - 1920 * (list.getCityLon(path.getPath(i)) - minX) / (maxX - minX);
      y = 2080 - 1080 * (list.getCityLat(path.getPath(i)) - minY) / (maxY - minY);

      //Cities
      dot += std::to_string(x);
      dot += "\" cy=\"";
      dot += std::to_string(y);
      dot += "\" r=\"";
      dot += '3';
      dot += "\" fill=\"#0078ff\"/>\n";

      if (i == 0){
        startX = x;
        startY = y;
      }

      //Lines
      if(i != 0)
      {
        dot += "<svg:line x1=\"";
        dot += std::to_string(oldX);
        dot += "\" y1=\"";
        dot += std::to_string(oldY);
        dot += "\" x2=\"";
        dot += std::to_string(x);
        dot += "\" y2=\"";
        dot += std::to_string(y);
        dot += "\" style=\"stroke:rgb(255,0,0);stroke-width:1\" />\n";
      }


      svgOut << dot;
    }

    //Connect last city to first
    dot = "<svg:line x1=\"";
    dot += std::to_string(x);
    dot += "\" y1=\"";
    dot += std::to_string(y);
    dot += "\" x2=\"";
    dot += std::to_string(startX);
    dot += "\" y2=\"";
    dot += std::to_string(startY);
    dot += "\" style=\"stroke:rgb(255,0,0);stroke-width:1\" />\n";


    line = "</svg:svg>\n <svg:svg width=\"2250px\" height=\"2500px\">\n";
    line += "</svg:svg>\n </body>\n </html>";
    svgOut << line;
  }
}

void readTSP(string fileName, CityNode& node, CityList& city)
{
  ifstream ifile(fileName);
  //Throw error if it can't open file
  if (!ifile)
  {
    cout << "Couldn't open file." << endl;
  }
  else
  {
    city.setFileName(fileName);
    string line;
    bool loop = true;

    while (loop)
    {
      //If reading file hits an error or EOF
      if (!ifile)
      {
        if (ifile.eof())
        {
          loop = false;
        }
        else
        {
          loop = true;
        }
      }
      //If file opens correctly
      else
      {
        getline(ifile, line);
        string nodeStart = "NODE_COORD_SECTION";

        //Start of node listings
        if (line == nodeStart)
        {
          bool loop1 = true;
          while(loop1)
          {
            //If reading file hits EOF
            if (line == "EOF")
            {
              loop1 = false;
              loop = false;
            }
            else
            {
              loop1 = true;
            }
            getline(ifile, line);

            //Ensure line is an int (node / info)
            istringstream iss(line);
            int val;
            iss >> val;
            if(iss)
            {
              istringstream iss1(line);
              //Grab each section of string
              for (int i = 0; i < 3; i++)
              {
                double val1;

                iss1 >> val1;
                //Node number
                if (i == 0)
                {
                  node.setNodeNumber(val1);
                }
                //Latitude
                else if (i == 1)
                {
                  node.setLatitudeY(val1);
                }
                //Longitude
                else if (i == 2)
                {
                  node.setLongitudeX(val1);
                }
              }
              city.setCityNode(node);
            }
          }
        }
      }
    }
  }
}
