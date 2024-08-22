// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBUIALERT_H
#define WEBUIALERT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface WebUIAlert : NSObject {
    int _otherAction;
    NSInteger _indexOfSelectedIdentity;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, copy, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (readonly, copy, nonatomic) NSArray *buttonTitles;
@property (retain, nonatomic) id *context; // ivar: _context
@property (readonly, nonatomic) int defaultAction; // ivar: _defaultAction
@property (nonatomic) int hideAction; // ivar: _hideAction
@property (retain, nonatomic) NSArray *identities; // ivar: _identities
@property (readonly, nonatomic) id *selectedIdentity;
@property (readonly, nonatomic) int tableAction; // ivar: _tableAction
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSArray *titles; // ivar: _titles
@property (readonly, nonatomic) int type; // ivar: _type


-(id)_buttonTitleForAction:(int)arg0 ;
-(id)initWithType:(int)arg0 title:(id)arg1 bodyText:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4 ;
-(id)initWithType:(int)arg0 title:(id)arg1 bodyText:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4 tableAction:(int)arg5 ;
-(id)initWithType:(int)arg0 title:(id)arg1 defaultAction:(int)arg2 otherAction:(int)arg3 ;
-(id)initWithType:(int)arg0 title:(id)arg1 defaultAction:(int)arg2 otherAction:(int)arg3 tableAction:(int)arg4 ;
-(int)actionForButtonTag:(NSInteger)arg0 ;
-(void)setSelectedTableItemIndex:(NSInteger)arg0 ;


@end


#endif