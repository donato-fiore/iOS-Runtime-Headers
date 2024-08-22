// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANALYTICSSTOREDESCRIPTOR_H
#define ANALYTICSSTOREDESCRIPTOR_H

@class NSURL, NSDictionary, NSPersistentStoreDescription;

#import <Foundation/Foundation.h>


@interface AnalyticsStoreDescriptor : NSObject

@property (nonatomic) NSUInteger analyticsStoreOptions; // ivar: _analyticsStoreOptions
@property (retain, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (readonly, nonatomic) NSDictionary *remoteStoreOptions; // ivar: _remoteStoreOptions
@property (readonly, nonatomic) NSPersistentStoreDescription *storeDescription; // ivar: _storeDescription
@property (retain, nonatomic) NSURL *storeURL; // ivar: _storeURL
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)applicationSupportDirectoryPath;
+(id)defaultModelURL;
+(id)defaultPersistentStoreURL;
+(id)directStoreDescriptor;
+(id)serverStoreDescriptor:(NSUInteger)arg0 ;
-(id)initWithType:(NSUInteger)arg0 storeURL:(id)arg1 modelURL:(id)arg2 options:(NSUInteger)arg3 ;


@end


#endif