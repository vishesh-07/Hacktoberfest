import React, { useState } from "react";
import { FaStar } from "react-icons/fa";

const StarRating = () => {
  const [rating, setRating] = useState(null);
  const [hover, setHover] = useState(null);
  return (
    <div>
      {[...Array(5)].map((star, i) => {
        const currentRating = i + 1;
        return (
          <label>
            <input
              type="radio"
              name="rating"
              value={currentRating}
              onClick={() => {
                setRating(currentRating);
              }}
            />
            <FaStar
              className="star"
              size={40}
              onMouseEnter={() => setHover(currentRating)}
              onMouseLeave={() => setHover(null)}
              color={currentRating <= (hover || rating) ? "gold" : "lightgrey"}
            />
          </label>
        );
      })}
    </div>
  );
};
export default StarRating;
