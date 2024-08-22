// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC5TEAUI16KEYBOARDOBSERVER_H
#define _TTC5TEAUI16KEYBOARDOBSERVER_H

@class SwiftObject;



@interface _TtC5TeaUI16KeyboardObserver : SwiftObject {
    ? onWillShowBlock;
    ? onShowBlock;
    ? onDidShowBlock;
    ? onWillHideBlock;
    ? onHideBlock;
    ? onDidHideBlock;
}




-(void)keyboardWillHideWithNotification:(id)arg0 ;
-(void)keyboardWillShowWithNotification:(id)arg0 ;


@end


#endif