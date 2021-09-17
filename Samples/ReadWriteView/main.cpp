
///*
//	osgb转obj格式
//*/
//#include"OSGB2OBJ.h"
//#include <Windows.h>
//#include <osgDB/ReadFile>
//#include <osgViewer/Viewer>
//
//int main(int argc, char *argv[])
//{
//	/*------------------------------- 郑健 -----------------------------------*/
//	//GISTileIndexTreeNode node;
//	//std::string path = "D:\\渭南\\osgb2obj\\Tile_+004_+001";
//	//std::string fileName="Tile_+004_+001_L21_0000300.osgb";
//	//GISTileIndexTreeNode* pParentNode=new GISTileIndexTreeNode();
//	//node.ReadOSGBScheduleData( path, fileName, pParentNode);
//
//	/*------------------------------- OSG库 -----------------------------------*/
//	//std::cout << 1 << std::endl;
//	//osg::ref_ptr<osg::Node> pnode = osgDB::readNodeFile("e:\\a.osgb");
//	osgViewer::Viewer viewer;
//	osg::Node* nodeRoot = osgDB::readNodeFile("D:/111.osgb");//.ive .osgt .osgb
//	viewer.setSceneData(nodeRoot);
//	viewer.run();
//
//	system("pause");
//	return 0;
//}

#include <Windows.h>
#include<osgViewer/Viewer>
#include<osgDB/ReadFile>
int main(int argc, char **argv)
{
	osgViewer::Viewer viewer;
	viewer.setSceneData(osgDB::readNodeFile("cow.osg"));
	return viewer.run();
}
