//
//  ListClient.h
//  office365-lists-sdk
//
//  Created by Gustavo on 7/22/14.
//  Copyright (c) 2014 Lagash. All rights reserved.
//

#import <office365-base-sdk/BaseClient.h>

@interface ListClient : BaseClient

- (NSURLSessionDataTask *)getListItems:(NSString *)name callback:(void (^)(NSMutableArray *listItems, NSError *error))callback;
- (NSURLSessionDataTask *)getListItemsByFilter:(NSString *)name filter:(NSString *)filter callback:(void (^)(NSMutableArray *listItems, NSError *))callback;
@end