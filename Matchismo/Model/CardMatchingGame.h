//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Anuj Jhunjhunwala on 6/26/15.
//  Copyright (c) 2015 StanfordCS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"

@interface CardMatchingGame : NSObject

// designated initializer
- (instancetype)initWithCardCount:(NSUInteger)count
                        usingDeck:(Deck *)deck;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSUInteger score;

@end
