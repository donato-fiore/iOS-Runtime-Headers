// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTNAPGCREATELANGUAGEPROFILEMESSAGE_H
#define FTNAPGCREATELANGUAGEPROFILEMESSAGE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

#import "FTCreateLanguageProfileRequest.h"
#import "FTCreateLanguageProfileResponse.h"

@interface FTNapgCreateLanguageProfileMessage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *NapgCreateLanguageProfileMessage _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (readonly, nonatomic) FTCreateLanguageProfileRequest *session_messageAsFTCreateLanguageProfileRequest;
@property (readonly, nonatomic) FTCreateLanguageProfileResponse *session_messageAsFTCreateLanguageProfileResponse;
@property (readonly, nonatomic) NSInteger session_message_type;


+(Class)session_message_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct NapgCreateLanguageProfileMessage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct NapgCreateLanguageProfileMessage *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::NapgCreateLanguageProfileMessage> )addObjectToBuffer:(*void)arg0 ;


@end


#endif