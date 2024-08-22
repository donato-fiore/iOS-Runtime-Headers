// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABLEVIEWSECTION_H
#define UITABLEVIEWSECTION_H

@class NSString, NSArray;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UITableViewSection : NSObject <NSCoding>



@property (copy, nonatomic) NSString *footerTitle; // ivar: _footerTitle
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (copy, nonatomic) NSArray *rows; // ivar: _rows


+(id)sectionWithRows:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif