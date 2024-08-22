// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIFPSKEYDELETIONINFOMANAGEDOBJECT_H
#define VUIFPSKEYDELETIONINFOMANAGEDOBJECT_H

@class NSManagedObject, NSData, NSString, NSNumber, NSDate, NSURL;



@interface VUIFPSKeyDeletionInfoManagedObject : NSManagedObject

@property (retain, nonatomic) NSData *additionalFPSRequestParamsJSONData;
@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSURL *fpsKeyServerURL;
@property (copy, nonatomic) NSURL *fpsNonceURL;
@property (retain, nonatomic) NSData *keyData;
@property (copy, nonatomic) NSURL *keyURI;
@property (copy, nonatomic) NSDate *playbackExpirationStartDate;


+(id)fetchRequest;


@end


#endif