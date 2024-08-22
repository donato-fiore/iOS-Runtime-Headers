// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIMENUPAGESECTIONCONTEXT_H
#define SKUIMENUPAGESECTIONCONTEXT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SKUIMenuPageSectionContext : NSObject {
    NSMutableDictionary *_sections;
}


@property (nonatomic) NSInteger selectedIndex; // ivar: _selectedIndex


-(id)sectionsForIndex:(NSInteger)arg0 ;
-(void)setSections:(id)arg0 forIndex:(NSInteger)arg1 ;


@end


#endif