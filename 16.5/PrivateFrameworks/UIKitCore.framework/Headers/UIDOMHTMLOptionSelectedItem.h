// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDOMHTMLOPTIONSELECTEDITEM_H
#define UIDOMHTMLOPTIONSELECTEDITEM_H

@class DOMHTMLOptionElement;
@protocol UIWebSelectedItemPrivate;

#import <Foundation/Foundation.h>


@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate>

 {
    BOOL _selected;
}


@property (retain, nonatomic) DOMHTMLOptionElement *_node; // ivar: _node


-(BOOL)isGroup;
-(BOOL)selected;
-(id)initWithHTMLOptionNode:(id)arg0 ;
-(id)node;
-(void)dealloc;
-(void)setSelected:(BOOL)arg0 ;
-(void)unselect;


@end


#endif