﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API DetachStaticIpRequest : public LightsailRequest
  {
  public:
    DetachStaticIpRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline const Aws::String& GetStaticIpName() const{ return m_staticIpName; }

    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline void SetStaticIpName(const Aws::String& value) { m_staticIpNameHasBeenSet = true; m_staticIpName = value; }

    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline void SetStaticIpName(Aws::String&& value) { m_staticIpNameHasBeenSet = true; m_staticIpName = std::move(value); }

    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline void SetStaticIpName(const char* value) { m_staticIpNameHasBeenSet = true; m_staticIpName.assign(value); }

    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline DetachStaticIpRequest& WithStaticIpName(const Aws::String& value) { SetStaticIpName(value); return *this;}

    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline DetachStaticIpRequest& WithStaticIpName(Aws::String&& value) { SetStaticIpName(std::move(value)); return *this;}

    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline DetachStaticIpRequest& WithStaticIpName(const char* value) { SetStaticIpName(value); return *this;}

  private:
    Aws::String m_staticIpName;
    bool m_staticIpNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
