// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBFORMDATETIMEPERIPHERAL_H
#define UIWEBFORMDATETIMEPERIPHERAL_H

@class DOMHTMLInputElement;
@protocol UIFormPeripheral, UIWebFormControl;

#import <Foundation/Foundation.h>


@interface UIWebFormDateTimePeripheral : NSObject <UIFormPeripheral>



@property (retain, nonatomic) NSObject<UIWebFormControl> *_control; // ivar: _control
@property (retain, nonatomic) DOMHTMLInputElement *_inputElement; // ivar: _inputElement


+(id)createPeripheralWithDOMHTMLInputElement:(id)arg0 ;
-(NSInteger)_datePickerModeForInputType:(id)arg0 ;
-(id)assistantView;
-(id)initWithDOMHTMLInputElement:(id)arg0 ;
-(void)beginEditing;
-(void)dealloc;
-(void)endEditing;


@end


#endif