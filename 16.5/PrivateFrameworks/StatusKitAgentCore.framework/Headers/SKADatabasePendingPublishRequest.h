// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKADATABASEPENDINGPUBLISHREQUEST_H
#define SKADATABASEPENDINGPUBLISHREQUEST_H

@class NSDate, NSData, NSString;

#import <Foundation/Foundation.h>


@interface SKADatabasePendingPublishRequest : NSObject

@property (readonly, copy, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, nonatomic) NSData *payloadData; // ivar: _payloadData
@property (readonly, nonatomic) NSInteger retryCount; // ivar: _retryCount
@property (readonly, copy, nonatomic) NSString *statusTypeIdentifier; // ivar: _statusTypeIdentifier
@property (readonly, copy, nonatomic) NSString *statusUniqueIdentifier; // ivar: _statusUniqueIdentifier


-(id)initWithCoreDataPendingPublishRequest:(id)arg0 ;
-(id)initWithStatusTypeIdentifier:(id)arg0 dateCreated:(id)arg1 payloadData:(id)arg2 statusUniqueIdentifier:(id)arg3 retryCount:(NSInteger)arg4 ;


@end


#endif