// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFCREDENTIALSET_H
#define SBFCREDENTIALSET_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBFCredentialSet : NSObject <NSSecureCoding>

 {
    *__ACMHandle _acmContext;
    BOOL _ownsContext;
    NSData *_cachedCredentials;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedCredentialSet:(id)arg0 ;
-(id)serializedCredentialSet;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif