// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLKSELECTABLEGRIDTUPLE_H
#define TLKSELECTABLEGRIDTUPLE_H

@class NSString;


#import "TLKObject.h"

@interface TLKSelectableGridTuple : TLKObject

@property (nonatomic) CGFloat size; // ivar: _size
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)tupleWithTitle:(id)arg0 subtitle:(id)arg1 ;
+(id)tuplesForTitles:(id)arg0 subtitles:(id)arg1 ;
-(id)description;


@end


#endif