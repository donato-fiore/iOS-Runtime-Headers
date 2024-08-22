// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWLFLDGEOMETRYCHANGERECORD_H
#define _UIVIEWLFLDGEOMETRYCHANGERECORD_H

@class UIViewLFLDChangeRecord, NSString, NSValue;


#import "UIView.h"

@interface _UIViewLFLDGeometryChangeRecord : UIViewLFLDChangeRecord

@property (readonly, nonatomic) NSString *currentLayoutMethodName; // ivar: _currentLayoutMethodName
@property (readonly, nonatomic) UIView *currentLayoutView; // ivar: _currentLayoutView
@property (readonly, nonatomic) NSString *geometricPropertyName; // ivar: _geometricPropertyName
@property (readonly, nonatomic) NSValue *geometricPropertyValue; // ivar: _geometricPropertyValue


-(id)description;
-(id)initWithGeometricPropertyName:(id)arg0 value:(id)arg1 currentLayoutView:(id)arg2 methodName:(id)arg3 ;


@end


#endif