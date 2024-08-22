// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSMINITIPMETADATA_H
#define TPSMINITIPMETADATA_H

@class NSError, NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "TPSDocument.h"
#import "TPSMonitoringEvents.h"

@interface TPSMiniTipMetadata : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) TPSDocument *content; // ivar: _content
@property (nonatomic) NSInteger customizationID; // ivar: _customizationID
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) TPSMonitoringEvents *monitoringEvents; // ivar: _monitoringEvents
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif