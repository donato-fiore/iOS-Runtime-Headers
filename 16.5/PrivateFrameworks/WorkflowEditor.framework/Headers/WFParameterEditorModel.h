// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPARAMETEREDITORMODEL_H
#define WFPARAMETEREDITORMODEL_H

@class WFGradient, WFParameter, NSError;
@protocol WFParameterState;

#import <Foundation/Foundation.h>


@interface WFParameterEditorModel : NSObject

@property (nonatomic) BOOL becomeFirstResponder; // ivar: _becomeFirstResponder
@property (readonly, nonatomic) WFGradient *buttonGradient; // ivar: _buttonGradient
@property (readonly, nonatomic) WFParameter *parameter; // ivar: _parameter
@property (readonly, nonatomic) NSError *resourceError; // ivar: _resourceError
@property (readonly, nonatomic) NSObject<WFParameterState> *state; // ivar: _state
@property (readonly, nonatomic) NSInteger widgetFamily; // ivar: _widgetFamily


-(id)initWithParameter:(id)arg0 state:(id)arg1 ;
-(id)initWithParameter:(id)arg0 state:(id)arg1 widgetFamily:(NSInteger)arg2 ;
-(id)initWithResourceError:(id)arg0 buttonGradient:(id)arg1 ;


@end


#endif