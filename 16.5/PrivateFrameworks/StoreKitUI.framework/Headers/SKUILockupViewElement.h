// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUILOCKUPVIEWELEMENT_H
#define SKUILOCKUPVIEWELEMENT_H



#import "SKUIViewElement.h"
#import "SKUIFullscreenImageViewElement.h"

@interface SKUILockupViewElement : SKUIViewElement {
    char _enabled;
}


@property (readonly, nonatomic) BOOL containsElementGroups;
@property (readonly, nonatomic) SKUIFullscreenImageViewElement *fullscreenImage;
@property (readonly, nonatomic) NSInteger lockupViewType; // ivar: _lockupViewType
@property (readonly, nonatomic, getter=isSelectable) BOOL selectable; // ivar: _selectable


-(BOOL)isEnabled;
-(NSInteger)pageComponentType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif