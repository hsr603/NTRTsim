/*
 * Copyright © 2012, United States Government, as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All rights reserved.
 * 
 * The NASA Tensegrity Robotics Toolkit (NTRT) v1 platform is licensed
 * under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0.
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific language
 * governing permissions and limitations under the License.
*/

/**
 * @file FileHelpers.h
 * @brief A series of functions to assist with file input/output
 * @date October 2014
 * @author Perry Bhandal and Brian Mirletz
 * $Id$
 */

#ifndef FILE_HELPERS_H 
#define FILE_HELPERS_H 

#include <string>

class FileHelpers 
{
public: 
    
    static std::string getFileString(std::string fileName);
    static std::string getResourcePath(std::string relPath);
    
    /**
     * Used by integration tests to check what the score was for that test
     * Assuming its being pointed to a scores.csv file generated by evolution
     */
    static double getFinalScore(std::string filePath);
    
};
#endif  // File_Helpers_H 
