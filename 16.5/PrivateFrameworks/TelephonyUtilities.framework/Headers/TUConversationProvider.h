// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONPROVIDER_H
#define TUCONVERSATIONPROVIDER_H

@class NSString, NSArray;
@protocol NSSecureCoding, OS_tcc_identity;

#import <Foundation/Foundation.h>

#import "TUConversationProviderConfiguration.h"

@interface TUConversationProvider : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (readonly, nonatomic) NSUInteger defaultAVMode;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) TUConversationProviderConfiguration *providerConfiguration; // ivar: _providerConfiguration
@property (readonly, copy, nonatomic) NSArray *supportedMediaTypes; // ivar: _supportedMediaTypes


+(BOOL)matchesDefaultProviderIdentifier:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)expanseProvider;
+(id)faceTimeProvider;
+(id)providerForIdentifier:(id)arg0 ;
+(id)unknownProvider;
-(BOOL)isDefaultProvider;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationProvider:(id)arg0 ;
-(BOOL)supportsAVMode:(NSUInteger)arg0 ;
-(BOOL)supportsLinks;
-(BOOL)supportsMediaType:(NSInteger)arg0 ;
-(BOOL)supportsSharePlay;
-(BOOL)supportsVideo;
-(NSUInteger)hash;
-(id)bundleIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConversationProvider:(id)arg0 ;
-(id)pseudonymFeatureID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif