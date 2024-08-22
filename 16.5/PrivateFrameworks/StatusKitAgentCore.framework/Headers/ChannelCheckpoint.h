// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHANNELCHECKPOINT_H
#define CHANNELCHECKPOINT_H

@class NSManagedObject, NSString;



@interface ChannelCheckpoint : NSManagedObject

@property (copy, nonatomic) NSString *channelID;
@property (nonatomic) NSInteger checkpoint;


+(id)fetchRequest;
+(id)identifierKeyPath;
+(id)predicateForChannelIdentifier:(id)arg0 ;


@end


#endif