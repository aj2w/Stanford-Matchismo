//
//  Deck.h
//  Matchismo
//
//  Created by Anuj Jhunjhunwala on 6/24/15.
//  Copyright (c) 2015 StanfordCS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end