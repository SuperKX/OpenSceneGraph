cmake_minimum_required(VERSION 2.8)
SET(EXE_NAME OSGView)

ADD_EXECUTABLE(${EXE_NAME} main.cpp )

############################### 包含目录 #####################################
include_directories( E:/OSG/OpenSceneGraph-3.6/install/X64_Debug/include)  #osg库

############################### 添加链接库 #####################################
#设置osg库
set(OSG_LIB_RELEASE E:/OSG/OpenSceneGraph-3.6/install/X64_Release/lib )  #当前只配置了releases版本
set(OSG_LIB_DEBUG E:/OSG/OpenSceneGraph-3.6/install/X64_Debug/lib )
set(OSG_LIB
	optimized ${OSG_LIB_RELEASE}/osgDB.lib
	optimized ${OSG_LIB_RELEASE}/osgViewer.lib
	debug ${OSG_LIB_DEBUG}/osgDBd.lib
	debug ${OSG_LIB_DEBUG}/osgViewerd.lib
)
target_link_libraries(${EXE_NAME} ${OSG_LIB})

set_target_properties(${EXE_NAME} PROPERTIES OUTPUT_NAME ${EXE_NAME}) #生成运行文件名
