/* -*- Mode: C; tab-width: 4 -*-
 *
 * Copyright (c) 2002-2004 Apple Computer, Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* ETC made the following changes:
 * 12/21/2018 SMK Purged 'Bonjour' branding from built artifacts
 */

//----------------------------------------------------------------------------------------
//	Registry Constants
//----------------------------------------------------------------------------------------

#if defined(UNICODE)

#	define kServiceParametersSoftware			L"SOFTWARE"
#	define kServiceParametersNode				L"SOFTWARE\\PRISM\\DNS-SD"
#	define kServiceName							L"PRISM DNS-SD Service"
#	define kServiceDynDNSBrowseDomains			L"BrowseDomains"
#	define kServiceDynDNSHostNames				L"HostNames"
#	define kServiceDynDNSRegistrationDomains	L"RegistrationDomains"
#	define kServiceDynDNSDomains				L"Domains"	// value is comma separated list of domains
#	define kServiceDynDNSEnabled				L"Enabled"
#	define kServiceDynDNSStatus					L"Status"
#	define kServiceManageLLRouting				L"ManageLLRouting"
#	define kServiceCacheEntryCount				L"CacheEntryCount"
#	define kServiceManageFirewall				L"ManageFirewall"
#	define kServiceAdvertisedServices			L"Services"

# else

#	define kServiceParametersSoftware			"SOFTWARE"
#	define kServiceParametersNode				"SOFTWARE\\PRISM\\DNS-SD"
#	define kServiceName							"PRISM DNS-SD Service"
#	define kServiceDynDNSBrowseDomains			"BrowseDomains"
#	define kServiceDynDNSHostNames				"HostNames"
#	define kServiceDynDNSRegistrationDomains	"RegistrationDomains"
#	define kServiceDynDNSDomains				"Domains"	// value is comma separated list of domains
#	define kServiceDynDNSEnabled				"Enabled"
#	define kServiceDynDNSStatus					"Status"
#	define kServiceManageLLRouting				"ManageLLRouting"
#	define kServiceCacheEntryCount				"CacheEntryCount"
#	define kServiceManageFirewall				"ManageFirewall"

#endif
