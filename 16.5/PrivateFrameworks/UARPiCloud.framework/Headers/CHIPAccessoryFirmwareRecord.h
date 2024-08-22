// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHIPACCESSORYFIRMWARERECORD_H
#define CHIPACCESSORYFIRMWARERECORD_H

@class NSNumber, CKRecord, NSString;
@protocol NSCopying, NSSecureCoding, OS_os_log;

#import <Foundation/Foundation.h>


@interface CHIPAccessoryFirmwareRecord : NSObject <NSCopying, NSSecureCoding>

 {
    NSObject<OS_os_log> *_log;
}


@property (readonly) NSNumber *cdVersionNumber; // ivar: _cdVersionNumber
@property (readonly) CKRecord *ckRecord; // ivar: _ckRecord
@property (readonly) NSString *firmwareBinaryHash; // ivar: _firmwareBinaryHash
@property (readonly) NSString *firmwareFileSize; // ivar: _firmwareFileSize
@property (readonly) NSString *firmwareURL; // ivar: _firmwareURL
@property (readonly) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (readonly) NSNumber *firmwareVersionNumber; // ivar: _firmwareVersionNumber
@property (readonly) NSNumber *hashAlgorithmType; // ivar: _hashAlgorithmType
@property (readonly) NSNumber *maxFirmwareVersionNumber; // ivar: _maxFirmwareVersionNumber
@property (readonly) NSNumber *minFirmwareVersionNumber; // ivar: _minFirmwareVersionNumber
@property (readonly) NSString *recordName; // ivar: _recordName
@property (readonly) NSString *recordStatus; // ivar: _recordStatus
@property (readonly) NSString *releaseNotesHash; // ivar: _releaseNotesHash
@property (readonly) NSString *releaseNotesURL; // ivar: _releaseNotesURL
@property (readonly) NSString *signature; // ivar: _signature
@property (readonly) NSString *verificationCertificateID; // ivar: _verificationCertificateID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCKRecord:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif