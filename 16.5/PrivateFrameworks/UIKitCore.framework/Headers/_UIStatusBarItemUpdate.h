// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARITEMUPDATE_H
#define _UISTATUSBARITEMUPDATE_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_UIStatusBarData.h"
#import "_UIStatusBarStyleAttributes.h"

@interface _UIStatusBarItemUpdate : NSObject <NSCopying>



@property (retain, nonatomic) _UIStatusBarData *data; // ivar: _data
@property (nonatomic) BOOL dataChanged; // ivar: _dataChanged
@property (nonatomic) BOOL enabilityChanged; // ivar: _enabilityChanged
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSDictionary *placementInfo; // ivar: _placementInfo
@property (retain, nonatomic) _UIStatusBarStyleAttributes *styleAttributes; // ivar: _styleAttributes
@property (nonatomic) BOOL styleAttributesChanged; // ivar: _styleAttributesChanged


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif