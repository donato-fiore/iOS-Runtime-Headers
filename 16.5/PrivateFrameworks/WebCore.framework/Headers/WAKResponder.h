// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WAKRESPONDER_H
#define WAKRESPONDER_H


#import <Foundation/Foundation.h>


@interface WAKResponder : NSObject



-(BOOL)acceptsFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)tryToPerform:(SEL)arg0 with:(id)arg1 ;
-(id)nextResponder;
-(void)_forwardEvent:(id)arg0 ;
-(void)deleteBackward:(id)arg0 ;
-(void)deleteForward:(id)arg0 ;
-(void)handleEvent:(id)arg0 ;
-(void)insertParagraphSeparator:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)keyDown:(id)arg0 ;
-(void)keyUp:(id)arg0 ;
-(void)mouseDown:(id)arg0 ;
-(void)mouseEntered:(id)arg0 ;
-(void)mouseExited:(id)arg0 ;
-(void)mouseMoved:(id)arg0 ;
-(void)mouseUp:(id)arg0 ;
-(void)moveDown:(id)arg0 ;
-(void)moveDownAndModifySelection:(id)arg0 ;
-(void)moveLeft:(id)arg0 ;
-(void)moveLeftAndModifySelection:(id)arg0 ;
-(void)moveRight:(id)arg0 ;
-(void)moveRightAndModifySelection:(id)arg0 ;
-(void)moveUp:(id)arg0 ;
-(void)moveUpAndModifySelection:(id)arg0 ;
-(void)scrollWheel:(id)arg0 ;
-(void)touch:(id)arg0 ;


@end


#endif