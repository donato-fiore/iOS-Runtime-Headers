// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTAPGBATCHRECOVERMESSAGE_H
#define FTAPGBATCHRECOVERMESSAGE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

#import "FTBatchRecoverFinalResponse.h"
#import "FTPronGuessResponse.h"
#import "FTStartBatchRecoverRequest.h"

@interface FTApgBatchRecoverMessage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ApgBatchRecoverMessage _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (readonly, nonatomic) FTBatchRecoverFinalResponse *session_messageAsFTBatchRecoverFinalResponse;
@property (readonly, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property (readonly, nonatomic) FTStartBatchRecoverRequest *session_messageAsFTStartBatchRecoverRequest;
@property (readonly, nonatomic) NSInteger session_message_type;


+(Class)session_message_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ApgBatchRecoverMessage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ApgBatchRecoverMessage *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::ApgBatchRecoverMessage> )addObjectToBuffer:(*void)arg0 ;


@end


#endif