// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEASRKEYWORDFINDERMESSAGE_H
#define FTMUTABLEASRKEYWORDFINDERMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTAsrKeywordFinderMessage.h"
#import "FTKeywordFinderRequest.h"
#import "FTKeywordFinderResponse.h"

@interface FTMutableAsrKeywordFinderMessage : FTAsrKeywordFinderMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTKeywordFinderRequest *session_messageAsFTKeywordFinderRequest;
@property (copy, nonatomic) FTKeywordFinderResponse *session_messageAsFTKeywordFinderResponse;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif