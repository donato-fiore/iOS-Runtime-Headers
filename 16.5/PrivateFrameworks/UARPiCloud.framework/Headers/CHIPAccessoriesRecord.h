// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHIPACCESSORIESRECORD_H
#define CHIPACCESSORIESRECORD_H

@class NSString, UARPAccessoryMetadata, CKRecord;
@protocol NSCopying, NSSecureCoding, OS_os_log;

#import <Foundation/Foundation.h>


@interface CHIPAccessoriesRecord : NSObject <NSCopying, NSSecureCoding>

 {
    NSObject<OS_os_log> *_log;
}


@property (readonly) NSString *accessoryListSignature; // ivar: _accessoryListSignature
@property (readonly) UARPAccessoryMetadata *accessoryMetadata; // ivar: _accessoryMetadata
@property (readonly) CKRecord *ckRecord; // ivar: _ckRecord
@property (readonly) NSString *installationGuideURLString; // ivar: _installationGuideURLString
@property (readonly) NSString *stonehengeCertificateID; // ivar: _stonehengeCertificateID


+(BOOL)supportsSecureCoding;
-(BOOL)createAccessoryMetadata;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCKRecord:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif