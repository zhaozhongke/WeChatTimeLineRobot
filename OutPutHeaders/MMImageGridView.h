/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSMutableArray;

@interface MMImageGridView : XXUnknownSuperclass {
	CGRect m_startRect;
	float m_stepX;
	float m_stepY;
	int m_columnCount;
	NSMutableArray* m_arrOfViews;
}
@property(retain, nonatomic) NSMutableArray* m_arrOfViews;
@property(assign, nonatomic) int m_columnCount;
@property(assign, nonatomic) float m_stepY;
@property(assign, nonatomic) float m_stepX;
@property(assign, nonatomic) CGRect m_startRect;
+(float)getLayoutHeightForViews:(int)views columms:(int)columms unitHeight:(float)height;
-(void).cxx_destruct;
-(CGSize)getLayoutSizeEx:(BOOL)ex;
-(CGSize)getLayoutSizeWithRefresh;
-(CGSize)getLayoutSize;
-(void)layoutSubviews;
-(void)dealloc;
-(id)init;
@end
