﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBCluster.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /**
   * <p>Contains the result of a successful invocation of the
   * <a>DescribeDBClusters</a> action.</p>
   */
  class AWS_RDS_API DescribeDBClustersResult
  {
  public:
    DescribeDBClustersResult();
    DescribeDBClustersResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeDBClustersResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A pagination token that can be used in a subsequent DescribeDBClusters
     * request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token that can be used in a subsequent DescribeDBClusters
     * request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token that can be used in a subsequent DescribeDBClusters
     * request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = value; }

    /**
     * <p>A pagination token that can be used in a subsequent DescribeDBClusters
     * request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token that can be used in a subsequent DescribeDBClusters
     * request.</p>
     */
    inline DescribeDBClustersResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent DescribeDBClusters
     * request.</p>
     */
    inline DescribeDBClustersResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent DescribeDBClusters
     * request.</p>
     */
    inline DescribeDBClustersResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline const Aws::Vector<DBCluster>& GetDBClusters() const{ return m_dBClusters; }

    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline void SetDBClusters(const Aws::Vector<DBCluster>& value) { m_dBClusters = value; }

    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline void SetDBClusters(Aws::Vector<DBCluster>&& value) { m_dBClusters = value; }

    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline DescribeDBClustersResult& WithDBClusters(const Aws::Vector<DBCluster>& value) { SetDBClusters(value); return *this;}

    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline DescribeDBClustersResult& WithDBClusters(Aws::Vector<DBCluster>&& value) { SetDBClusters(value); return *this;}

    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline DescribeDBClustersResult& AddDBClusters(const DBCluster& value) { m_dBClusters.push_back(value); return *this; }

    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline DescribeDBClustersResult& AddDBClusters(DBCluster&& value) { m_dBClusters.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeDBClustersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBClustersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_marker;
    Aws::Vector<DBCluster> m_dBClusters;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws