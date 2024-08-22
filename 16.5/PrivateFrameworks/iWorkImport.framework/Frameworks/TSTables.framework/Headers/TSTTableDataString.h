// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLEDATASTRING_H
#define TSTTABLEDATASTRING_H



#import "TSTTableDataObject.h"

@interface TSTTableDataString : TSTTableDataObject

@property (readonly, nonatomic) BOOL shouldWrap; // ivar: _shouldWrap


+(id)objectWithString:(id)arg0 refCount:(unsigned int)arg1 ;
-(NSUInteger)estimateByteSize;
-(id)description;
-(id)initObjectWithString:(id)arg0 refCount:(unsigned int)arg1 ;
-(id)string;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 completion:(id)arg2 ;


@end


#endif