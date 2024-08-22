// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBELEMENTDICTIONARY_H
#define WEBELEMENTDICTIONARY_H

@class NSDictionary, NSMutableDictionary, NSMutableSet;



@interface WebElementDictionary : NSDictionary {
    *void _result;
    NSMutableDictionary *_cache;
    NSMutableSet *_nilValues;
    BOOL _cacheComplete;
}




+(void)initialize;
+(void)initializeLookupTable;
-(NSUInteger)count;
-(id)_absoluteImageURL;
-(id)_absoluteLinkURL;
-(id)_absoluteMediaURL;
-(id)_altDisplayString;
-(id)_domNode;
-(id)_isContentEditable;
-(id)_isInScrollBar;
-(id)_isLiveLink;
-(id)_isSelected;
-(id)_spellingToolTip;
-(id)_targetWebFrame;
-(id)_textContent;
-(id)_title;
-(id)_titleDisplayString;
-(id)_webFrame;
-(id)initWithHitTestResult:(*void)arg0 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)_fillCache;
-(void)dealloc;


@end


#endif