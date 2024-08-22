// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHIPATTESTATIONCERTIFICATERECORD_H
#define CHIPATTESTATIONCERTIFICATERECORD_H

@class CKRecord, NSString;
@protocol NSCopying, NSSecureCoding, OS_os_log;

#import <Foundation/Foundation.h>


@interface CHIPAttestationCertificateRecord : NSObject <NSCopying, NSSecureCoding>

 {
    NSObject<OS_os_log> *_log;
}


@property (readonly) CKRecord *ckRecord; // ivar: _ckRecord
@property (readonly) NSString *intermediateCertificates; // ivar: _intermediateCertificates
@property (readonly) NSString *recordName; // ivar: _recordName
@property (readonly) NSString *recordStatus; // ivar: _recordStatus
@property (readonly) NSString *rootCertificate; // ivar: _rootCertificate
@property (readonly) NSString *signature; // ivar: _signature
@property (readonly) NSString *verificationCertificateID; // ivar: _verificationCertificateID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCKRecord:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif