// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCEACCESSREPORT_H
#define BRCEACCESSREPORT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRCEAccessReport : NSObject <NSSecureCoding>



@property BOOL has_acls; // ivar: has_acls
@property NSUInteger incidents; // ivar: incidents
@property unsigned int protection_class; // ivar: protection_class
@property unsigned int st_flags; // ivar: st_flags
@property unsigned int st_gid; // ivar: st_gid
@property unsigned short st_mode; // ivar: st_mode
@property unsigned int st_uid; // ivar: st_uid


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif