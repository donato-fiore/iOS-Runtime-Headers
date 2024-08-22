// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTABLETEMPLATEVALUE_H
#define WFTABLETEMPLATEVALUE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFTableTemplateValue : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger compoundType; // ivar: _compoundType
@property (readonly, copy, nonatomic) NSArray *rows; // ivar: _rows


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCompoundType:(NSInteger)arg0 rows:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif