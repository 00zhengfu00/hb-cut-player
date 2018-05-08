/*******************************************************************************
 * file_helper.h
 * Copyright: (c) 2014 Haibin Du(haibindev.cnblogs.com). All rights reserved.
 * -----------------------------------------------------------------------------
 *
 *
 *
 * -----------------------------------------------------------------------------
 * 2016-6-8 10:29 - Created (Haibin Du)
 ******************************************************************************/

#ifndef _HDEV_FILE_HELPER_H_
#define _HDEV_FILE_HELPER_H_

#include "base/base.h"

#include <string>
#include <vector>

namespace filehelper {

std::string ThisProcessDir();

/***
    *  ����Ŀ¼
    */
void MakeAllDir(const std::string path);

/***
    *  ɾ��ĳ��Ŀ¼������Ŀ¼��������Ŀ¼���ļ���
    *  @param delDirPath : ��ɾ����Ŀ¼����·��
    *  @param isDelThis ���Ƿ�ͬʱɾ�����Ŀ¼
    */
void DelDir(const std::string& delDirPath, bool isDelThis);

/***
    *  ��ȡĿ¼�������ļ���Ŀ¼
    */
void GetDirFileList(const std::string& dir,
    std::vector<std::string>& fileList, std::vector<std::string>& dirList);

/***
    *  ��ȡĿ¼�������ļ���������Ŀ¼
    */
void GetDirFileList(const std::string& dir, std::vector<std::string>& fileList);

} // namespace filehelper

#endif // _HDEV_FILE_HELPER_H_
