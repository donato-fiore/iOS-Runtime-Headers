// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCELLSTYLEHANDLE_H
#define TSTCELLSTYLEHANDLE_H

@class TSWPPadding;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSTCellStyle.h"

@interface TSTCellStyleHandle : NSObject <NSCopying>



@property (readonly, nonatomic) TSTCellStyle *cellStyle; // ivar: _cellStyle
@property (readonly, nonatomic) BOOL cellWraps; // ivar: _cellWraps
@property (readonly, nonatomic) BOOL isVariation; // ivar: _isVariation
@property (readonly, nonatomic) BOOL overridesPadding; // ivar: _overridesPadding
@property (readonly, nonatomic) TSWPPadding *padding; // ivar: _padding
@property (readonly, nonatomic) int verticalAlignment; // ivar: _verticalAlignment


+(id)handleForCellStyle:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCellStyle:(id)arg0 ;


@end


#endif