// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTUISTATE_H
#define TSCHCHARTUISTATE_H

@class NSString;
@protocol NSCopying, TSKUIState;

#import <Foundation/Foundation.h>


@interface TSCHChartUIState : NSObject <NSCopying, TSKUIState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValidMultiDataSetIndex; // ivar: _isValidMultiDataSetIndex
@property (readonly, nonatomic) NSUInteger lastColCountInCDE; // ivar: _lastColCountInCDE
@property (readonly, nonatomic) NSUInteger lastColSelectedInCDE; // ivar: _lastColSelectedInCDE
@property (readonly, nonatomic) NSUInteger lastRowCountInCDE; // ivar: _lastRowCountInCDE
@property (readonly, nonatomic) NSUInteger lastRowSelectedInCDE; // ivar: _lastRowSelectedInCDE
@property (readonly, nonatomic) NSUInteger multiDataSetIndex; // ivar: _multiDataSetIndex
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useFullKeyboard; // ivar: _useFullKeyboard


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithRowRange:(struct _NSRange )arg0 colRange:(struct _NSRange )arg1 useFullKeyboard:(BOOL)arg2 ;
-(id)initWithRowRange:(struct _NSRange )arg0 colRange:(struct _NSRange )arg1 useFullKeyboard:(BOOL)arg2 multiDataSetIndex:(NSUInteger)arg3 ;
-(id)initWithRowRange:(struct _NSRange )arg0 colRange:(struct _NSRange )arg1 useFullKeyboard:(BOOL)arg2 multiDataSetIndex:(NSUInteger)arg3 validIndex:(BOOL)arg4 ;
-(void)resetForInitialViewing;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif