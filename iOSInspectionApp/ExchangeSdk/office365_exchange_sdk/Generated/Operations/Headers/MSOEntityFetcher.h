/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * See License.txt in the project root for license information.
 ******************************************************************************/

#import "MSOODataEntityFetcher.h"
#import "MSOEntityOperations.h"
#import "MSOEntity.h"

#import "MSOUserFetcher.h"	
#import "MSOFolderFetcher.h"	
#import "MSOItemFetcher.h"	
#import "MSOAttachmentFetcher.h"	
#import "MSOCalendarFetcher.h"	
#import "MSOCalendarGroupFetcher.h"	
#import "MSOContactFolderFetcher.h"	
/**
* The header for type MSOEntityFetcher.
*/

@protocol MSOEntityFetcher

@optional
-(NSURLSessionDataTask *)execute:(void (^)(MSOEntity* entity, NSError *error))callback;
-(NSURLSessionDataTask*) update:(id)updatedEntity :(void (^)(MSOEntity*, NSError * error))callback;
@end

@interface MSOEntityFetcher : MSOODataEntityFetcher<MSOEntityFetcher>

-(MSOEntityOperations*) getOperations;
		
-(MSOUserFetcher*) asUser;	
		
-(MSOFolderFetcher*) asFolder;	
		
-(MSOItemFetcher*) asItem;	
		
-(MSOAttachmentFetcher*) asAttachment;	
		
-(MSOCalendarFetcher*) asCalendar;	
		
-(MSOCalendarGroupFetcher*) asCalendarGroup;	
		
-(MSOContactFolderFetcher*) asContactFolder;	
	
@end