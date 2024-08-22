// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQBACKUPDEVICE_H
#define ICQBACKUPDEVICE_H

@class NSNumber, NSString, NSURL, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICQImageURL.h"

@interface ICQBackupDevice : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *backupFailedByinBytes; // ivar: _backupFailedByinBytes
@property (retain, nonatomic) NSNumber *backupSize; // ivar: _backupSize
@property (retain, nonatomic) NSNumber *backupTimestamp; // ivar: _backupTimestamp
@property (retain, nonatomic) NSNumber *bytesRequiredForBackup; // ivar: _bytesRequiredForBackup
@property (copy, nonatomic) NSString *deleteButtonLabel; // ivar: _deleteButtonLabel
@property (retain, nonatomic) NSURL *deleteURL; // ivar: _deleteURL
@property (copy, nonatomic) NSString *detailViewController; // ivar: _detailViewController
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (copy, nonatomic) NSString *deviceSubtitle; // ivar: _deviceSubtitle
@property (copy, nonatomic) NSString *deviceUDID; // ivar: _deviceUDID
@property (retain, nonatomic) ICQImageURL *imageURL; // ivar: _imageURL
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (nonatomic) BOOL isLocalBackup; // ivar: _isLocalBackup
@property (retain, nonatomic) ICQImageURL *largeImageURL; // ivar: _largeImageURL
@property (readonly, nonatomic) NSDictionary *rawDictionary;
@property (retain, nonatomic) NSNumber *storageUsed; // ivar: _storageUsed
@property (copy, nonatomic) NSString *storageUsedLabel; // ivar: _storageUsedLabel


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif