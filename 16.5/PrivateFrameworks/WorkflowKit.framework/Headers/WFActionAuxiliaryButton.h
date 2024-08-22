// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONAUXILIARYBUTTON_H
#define WFACTIONAUXILIARYBUTTON_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFActionAuxiliaryButton : NSObject

@property (copy, nonatomic) id *handler; // ivar: _handler
@property (copy, nonatomic) NSString *symbolName; // ivar: _symbolName
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)buttonWithTitle:(id)arg0 symbolName:(id)arg1 handler:(id)arg2 ;
-(id)initWithTitle:(id)arg0 symbolName:(id)arg1 handler:(id)arg2 ;


@end


#endif