// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USCATEGORYUSAGEREPORT_H
#define USCATEGORYUSAGEREPORT_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USCategoryUsageReport : NSObject <NSSecureCoding>



@property (copy) NSArray *applicationUsage; // ivar: _applicationUsage
@property (readonly, copy) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (readonly) CGFloat totalUsageTime; // ivar: _totalUsageTime
@property (readonly, copy) NSArray *webUsage; // ivar: _webUsage


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCategoryIdentifier:(id)arg0 totalUsageTime:(CGFloat)arg1 applicationUsage:(id)arg2 webUsage:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_usCategoryUsageReportCommonInitWithTotalUsageTime:(CGFloat)arg0 applicationUsage:(id)arg1 webUsage:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif