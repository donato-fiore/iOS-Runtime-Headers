// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTFIELDEDITINGPROCESSOR_H
#define _UITEXTFIELDEDITINGPROCESSOR_H

@protocol _UITextFieldEditingProcessorDelegate;

#import <Foundation/Foundation.h>


@interface _UITextFieldEditingProcessor : NSObject

@property (weak, nonatomic) NSObject<_UITextFieldEditingProcessorDelegate> *delegate; // ivar: _delegate


-(id)beginEditingWithTextStorage:(id)arg0 ;
-(id)overridingEditingAttributesForAttributes:(id)arg0 withOverrides:(id)arg1 ;


@end


#endif