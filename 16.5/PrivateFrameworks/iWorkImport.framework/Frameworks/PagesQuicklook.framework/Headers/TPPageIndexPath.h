// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPPAGEINDEXPATH_H
#define TPPAGEINDEXPATH_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TPPageIndexPath : NSObject <NSCopying>



@property (nonatomic) NSUInteger pageIndex; // ivar: _pageIndex
@property (nonatomic) NSUInteger sectionIndex; // ivar: _sectionIndex


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSectionIndex:(NSUInteger)arg0 pageIndex:(NSUInteger)arg1 ;


@end


#endif