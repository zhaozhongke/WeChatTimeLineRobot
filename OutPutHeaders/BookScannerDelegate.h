/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol BookScannerDelegate <NSObject>
@optional
-(void)onSendDataLength:(unsigned)length;
-(void)onScanBookError:(int)error;
-(void)onGotScanItem:(id)item;
@end

