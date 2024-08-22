// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACCESSIBILITYCUSTOMROTOR_H
#define UIACCESSIBILITYCUSTOMROTOR_H

@class NSAttributedString, NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface UIAccessibilityCustomRotor : NSObject

@property (copy, nonatomic) NSAttributedString *attributedName; // ivar: _attributedName
@property (copy, nonatomic) id *itemSearchBlock; // ivar: _itemSearchBlock
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSInteger systemRotorType; // ivar: systemRotorType
@property (weak, nonatomic) id *targetElement; // ivar: targetElement
@property (retain, nonatomic) NSUUID *uuid; // ivar: uuid


-(id)initWithAttributedName:(id)arg0 itemSearchBlock:(id)arg1 ;
-(id)initWithName:(id)arg0 itemSearchBlock:(id)arg1 ;
-(id)initWithSystemType:(NSInteger)arg0 itemSearchBlock:(id)arg1 ;


@end


#endif