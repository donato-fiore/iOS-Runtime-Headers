// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTAPGPRONGUESSMESSAGE_H
#define FTAPGPRONGUESSMESSAGE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

#import "FTAudioPacket.h"
#import "FTCancelRequest.h"
#import "FTFinishAudio.h"
#import "FTPronGuessResponse.h"
#import "FTStartPronGuessRequest.h"

@interface FTApgPronGuessMessage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ApgPronGuessMessage _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (readonly, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (readonly, nonatomic) FTCancelRequest *session_messageAsFTCancelRequest;
@property (readonly, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (readonly, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property (readonly, nonatomic) FTStartPronGuessRequest *session_messageAsFTStartPronGuessRequest;
@property (readonly, nonatomic) NSInteger session_message_type;


+(Class)session_message_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ApgPronGuessMessage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ApgPronGuessMessage *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::ApgPronGuessMessage> )addObjectToBuffer:(*void)arg0 ;


@end


#endif