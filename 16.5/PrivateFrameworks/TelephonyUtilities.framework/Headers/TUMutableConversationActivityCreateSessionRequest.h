// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUMUTABLECONVERSATIONACTIVITYCREATESESSIONREQUEST_H
#define TUMUTABLECONVERSATIONACTIVITYCREATESESSIONREQUEST_H

@class NSUUID, NSString, NSData, CKShare;


#import "TUConversationActivityCreateSessionRequest.h"
#import "TUConversationActivityMetadata.h"

@interface TUMutableConversationActivityCreateSessionRequest : TUConversationActivityCreateSessionRequest

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *activityIdentifier;
@property (copy, nonatomic) NSData *applicationContext;
@property (retain, nonatomic) TUConversationActivityMetadata *metadata;
@property (copy, nonatomic) CKShare *share;
@property (nonatomic, getter=isStaticActivity) BOOL staticActivity;




@end


#endif